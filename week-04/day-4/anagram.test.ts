import {test} from 'tape';
import {anagram} from './anagram'


test('Anagram function should return true', (t) => {
  const actual = anagram('was', 'saw');
  const expected = true;
  t.equal( actual, expected, 'It has to be true cause this is anagram!');
  t.end();
})