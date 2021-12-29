struct node * bubble_sortFirstComeFirstServed(struct node *h){
	struct node *left_Pointer; 
	struct node *right_Pointer = NULL; 
  	int swap;
	do{	
		swap = 0;
		left_Pointer = h;
		while(left_Pointer->next != right_Pointer)
		{
			if (left_Pointer->arrival> left_Pointer->next->arrival){
				my_swapFCFS(left_Pointer, left_Pointer->next); 
                swap = 1; 
			}
			left_Pointer = left_Pointer->next;
		}
		right_Pointer = left_Pointer;
}while(swap);
}
