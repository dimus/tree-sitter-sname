terminator = '\n';

module.exports = grammar({
  name: 'sname',

  rules: {
    list: ($) => repeat($.sci_name),

    sci_name: ($) => seq($.genus, optional($.species), terminator),

    genus: ($) => seq(/[A-Z][a-z]+/, optional($.subgenus)),

    subgenus: (_) => seq('(', /[A-Z][a-z]+/, ')'),

    species: ($) =>
      seq(
        /[a-z]+/,
        optional(
          choice(
            $.authorship_orig,
            $.authorship,
            seq($.authorship_orig, $.authorship)
          )
        )
      ),

    authorship: ($) => seq(repeat1($.author), optional($.year)),

    authorship_orig: ($) => seq('(', $.authorship, ')'),

    author: ($) => seq(/[A-Za-z]+/, optional($.author_sep)),

    author_sep: (_) => choice(',', /\s+&/),

    year: (_) => /[12][7890][0-9]([0-9]|\?)[a-z]?/,
  },
});
