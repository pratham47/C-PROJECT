int min(int x, int y) // Utility function to find the minimum between two numbers
{
  if(x <= y)
  {
      return x;
  }
  else
  {
      return y;
  }
}

// Main function that performs Fibonacci search
int fib_search(void **arr, int n, void *key, int (*cmp)(void *,void * ))
{
	int m_2 = 0; // m-2 fibonacci number
	int m_1 = 1; // m-1 fibonacci number
	int m = m_2 + m_1; // mth fibonacci number

	while (m < n) // Finding the smallest fibonacci number greater than or equal to the size of array
    {
		m_2 =  m_1;
		m_1 = m;
		m = m_2 + m_1;
	}

	int offset = -1; // Marking eliminated range from front of the array

	while (m > 1)
        {
		int i = min(offset + m_2, n - 1); // To check if offset + m_2 fibonacci number range is valid to search the key

		if((*cmp)(arr[i],key) == -1) // If key is greater than the value at index m-2, we cut the subarray array from offset to i index
                {
			m = m_1;
			m_1 = m_2;
			m_2 = m - m_1;
			offset = i;
		}
		else if((*cmp)(arr[i],key) == 1) // If key is smaller than the value at index m-2, we cut the subarray after i+1 (i.e m_2 + 1)
                {
			m = m_2;
			m_1 = m_1 - m_2;
			m_2 = m - m_1;
		}
		else
                {
                       return i; // returning element if found
                }
	 }

    if(m_1 && ((*cmp)(arr[offset+1],key) == 0)) // comparison of last element of array for the given key
    {
      return offset + 1;
    }
	return -1;
}
