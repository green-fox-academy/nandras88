import {test} from 'tape';
import {apple} from './apple';

test('Apple gonna be equal with GetApple', (t) => {
  const actual = apple.getApple();
  const expected = 'apple';
  t.equal( actual, expected, 'this gotta be the same!!!');
  t.end();
})