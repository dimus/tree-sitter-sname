terminator = '\n';

module.exports = grammar({
  name: 'sname',

  rules: {
    list: ($) => repeat($.sci_name),

    sci_name: ($) => seq($.genus, optional($.species), terminator),

    genus: ($) => seq(/[A-Z][a-z]+/, optional($.subgenus)),

    subgenus: ($) => seq('(', /[A-Z][a-z]+/, ')'),

    species: ($) => seq(/[a-z]+/, optional($.authorship)),

    authorship: ($) => seq($.author, repeat($.author), optional($.year)),

    author: ($) => /[A-Za-z]+(,|\s+&)?/,

    year: ($) => /[12][7890][0-9]([0-9]|\?)[a-z]?/,
  },
});
