export const weakMap = new WeakMap();

export function queryAPI(endpoint) {
  let numCalls = 0;

  if (weakMap.has(endpoint)) {
    numCalls = weakMap.get(endpoint);
  }

  weakMap.set(endpoint, numCalls + 1);

  if (numCalls + 1 >= 5) {
    throw new Error('Endpoint load is high');
  }
}
