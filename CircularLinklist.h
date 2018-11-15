/*************************************************************************
    > File Name: CircularLinklist.h
    > Author: liubiyongge
    > Mail: liubiyongge@163.com
    > Created Time: 2018年11月08日 星期四 15时07分18秒
 ************************************************************************/

#ifndef _CIRCULARLINKLIST_H
#define _CIRCULARLINKLIST_H
template<typename ElemType>
class CircularLinklist
{
	public:
		class LinkNode
		{
		public:
			ElemType data;
			LinkNode *next;
		};
		typedef LinkNode *NodePointer;

	//clear list
	void clear();

	//delete i node 
	Status deleteElem(int i,ElemType &e);

	//get head data
	Status getHeadElem(ElemType &e);

	//is empty or nor
	Status isEmpty();

	//move head to i node
	Status moveHead(int i);

	CircularLinklist<ElemType> operator = (CircularLinklist<ElemType> rightL);

	//***********************
	CircularLinklist();
	~CircularLinklist();
	CircularLinklist(const CircularLinklist& otherL);

protected:
	NodePointer head;

};

template<typename ElemType>
void CircularLinklist<ElemType>::clear()
{
	NodePointer p;
	if(!head) return;
	while(head != head->next)
	{
		p = head->next;
		head->next = p->next;
		delete p;
	}
	delete head;
	head = NULL;
}

template <typename ElemType>
Status CircularLinklist<ElemType>::deleteElem(int i, ElemType& e)
{
	int j = 1;
	NodePointer r;
	NodePointer p = head;
	if(!head)
		return ERROR;

	while(j < i)
	{
		r = p;
		p = p->next;
		++j;
	}
	e = p->data;
	if(p == p->next)
		head=NULL;
	else
		head=r->next=p->next;

	delete p;
	return OK;
}

template<typename ElemType>
Status CircularLinklist<ElemType>::getHeadElem(ElemType& e)
{
	if(!head)
		return ERROR;
	e = head->data;
	return OK;
}

template <typename ElemType>
Status CircularLinklist<ElemType>::isEmpty()
{
	return (head?0:1);
}

template<typename ElemType>
Status CircularLinklist<ElemType>::moveHead(int i)
{
	int j = 1;
	if(!head)
		return ERROR;

	while(j < i)
	{
		head = head->next;
		++j;
	}

	return OK;
}

template<typename ElemType>
CircularLinklist<ElemType> CircularLinklist<ElemType>::operator=(CircularLinklist<ElemType> rightL)
{
	NodePointer p=NULL;
	NodePointer rp=rightL.head;
	NodePointer s;

	if(this !=&rightL)
	{
		clear();
		while(rp->next != rightL.head)
		{
			s = new(LinkNode);
			assert(s != 0);
			s->data = rp->data;
			if(!head)
				head = s;
			else
				p->next = s;

			p = s;
			rp = rp->next;
		}
		if(head)
			p->next = head;
	}
	return *this;
}

template<typename ElemType>
CircularLinklist<ElemType>::CircularLinklist()
{
	head = NULL;
}

template<typename ElemType>
CircularLinklist<ElemType>::~CircularLinklist()
{
	clear();
}

template<typename ElemType>
CircularLinklist<ElemType>::CircularLinklist(const CircularLinklist<ElemType> &otherL)
{
	NodePointer p;
	NodePointer op=otherL.head;
	NodePointer s;
	while(op->next != otherL.head)
		{
			s = new(LinkNode);
			assert(s != 0);
			s->data = op->data;
			if(!head)
				head = s;
			else
				p->next = s;

			p = s;
			op = op->next;
		}
		if(head)
			p->next = head;
}
#endif
	