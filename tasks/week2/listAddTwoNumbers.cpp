ListNode* addTwoNumbers(ListNode* l1,ListNode* l2)
{
	int sum;
	sum=l1->val+l2->val;
	ListNode* l_sum=new ListNode(sum>10?sum-10:sum);
	ListNode*l3=l_sum;
	l3->next=&ListNode(sum>10?1:0);
	if(l1->next==NULL)
	{
		l1->next=&ListNode(0);
	}
	 if(l2->next==NULL)
        {
                l2->next=&ListNode(0);
        }
	ListNode* this_l1=l1->next;
	ListNode* this_l2=l2->next; 
	ListNode* this_l3=l3->next;
	int flag=1;
	while(flag)
	{
	 	sum=this_l1->val+this_l2->val+this_l3->val;
        	this_l3->val=sum>10?sum-10:sum;
		this_l3->next=new ListNode(sum>10?1:0);

        	if(this_l1->next==NULL||this_l2->next!=NULL)
        	{
        	        flag=1;
        	}
        	else
        	{
        	    	flag=0;
			if(this_l3->next->val==0)
			{
				this_l3=NULL;
			}
        	}
		 if(this_l1->next==NULL)
	        {
	                this_l1->next=&ListNode(0);
	        }
	         if(this_l2->next==NULL)
	        {
	                this_l2->next=&ListNode(0);
	        }

		ListNode* this_l1=this_l1->next;
	        ListNode* this_l2=this_l2->next;
	        ListNode* this_l3=this_l3->next;



	}
22	return l3;


}
