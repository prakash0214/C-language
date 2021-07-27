// w a p to addmid ?

void addmid(struct stu*ptr)
{
  struct stu *ptr *temp=NULL,*p=NULL,*pre=NULL;
  temp=p=ptr;
  while(p->next->next)
  {
    p=p->next->next;
    temp=temp->next;
  }
  nu->next=temp->next;
  temp->next=nu;
}
