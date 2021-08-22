terminator = '\n';

module.exports = grammar({
  name: 'SciName',

  rules: {
    sci_name: ($) => seq($.genus, optional($.species), terminator),

    genus: ($) => seq(/[A-Z][a-z]+/, optional($.subgenus)),

    subgenus: ($) => seq('(', /[A-Z][a-z]+/, ')'),

    species: ($) => seq(/[a-z]+/, repeat($.author)),

    author: ($) => seq(/[A-Za-z]+(,|\s+&)?/, optional($.year)),

    year: ($) => /[12][7890][0-9]([0-9]|\?)[a-z]?/,
  },
});
