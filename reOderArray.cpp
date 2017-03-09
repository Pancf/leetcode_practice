/*
 * 题：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的
 * 奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，
 * 偶数和偶数之间的相对位置不变
 */

class solution{
	public:
		void reOderArray(vector<int> &array){
			vector<int> result;
			for(int i=0;i<array.size();i++){
				if(array[i]%2)
					result.push_back(array[i]);
			}
			for(int i=0;i<array.size();i++){
				if(!array[i]%2)
					result.push_back(array[i]);
			}
			array=result;
		}	
}