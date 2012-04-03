// sha-array by Roger 5/26/98

#include <ansi.h>
#include <array.h>
inherit SKILL;
void doing_array(object *,object);
int valid_enable(string usage) { return usage=="array";} 
int mean;
int form_array(object leader)
{
	object *member;
        int i,j,sworder=0,mean=0;
        int enable_array=0;
	int number;
	member = leader->query_team();
	if( sizeof(member) == 2)
             number=2;
        else if( sizeof(member)==3)
             number=3;
        else if( sizeof(member)==4)
             number=4;
        else if( sizeof(member)==8)
             number=8;
        else 
             return notify_fail("���������Ľ��������з���\n");

//  if(sworder!=number) return notify_fail("��ԱҪȫ���ɽ��ɵ��Ӳ������ɽ�����\n");
      for(j=0;j<number;j++){
        if(member[j]->query("family/family_name")=="�ɽ���")
        sworder=sworder+1;
                	   }

      for(j=0;j<number;j++){
        mean=mean+member[j]->query_skill("sha-array",1);
                	   }
      mean=mean/number;
       
if(sworder!=number) 
{
    leader->set_temp("no_power",1);
    leader->apply_condition("no_power",2);
return notify_fail("��ԱҪȫ���ɽ��ɵ��Ӳ������ɽ�����\n");
return 0;
}

	if( leader->query_temp("use_form",1) )
	     return notify_fail("��������ʩչ�С�\n");

       if(sizeof(member) < 1)
        {
              message_vision("��ʹ���ɽ������bug ��appo ����...\n",leader);
              leader->set_function("sha-kee",0);
              leader->set_function("swordkee",0);
              log_file("sword/array-bug",sprintf("%s(%s) ʹ��array bug �� on %s\n",leader->query("name"),leader->query("id"),ctime(time()) ));
        }
      else if(sizeof(member) == 2)
	{
          if(leader->query_skill("sha-array",1) >= 30){
	  if( leader->query("sen",1) >= 40)
            { 
              message_vision( HIG "$N��������չ���������ǽ���\n" NOR, leader);
              leader->add("sen",-40);
              leader->set_temp("form_mean",mean);
              leader->set_temp("form_number",number);
              doing_array(member,leader);
             }
           else
	      message_vision("[1m�㾫������������������\n[0m",leader);
                                                       }
           else
              message_vision("[1m���ɽ����󲻹����죬�޷��������ǽ���\n[0m",leader);
           
         }
        
	else if( sizeof(member) == 3 )
	 {
            if(leader->query_skill("sha-array",1) >= 50){
	    if( leader->query("sen",1) >= 60)
	      { 
	       message_vision( HIG "$N��������չ����������˽���\n" NOR, leader);
	       leader->add("sen",-60);
               leader->set_temp("form_mean",mean);
               leader->set_temp("form_number",number);
	       doing_array(member,leader);
	      }
	     else
	       message_vision("[1m�㾫������������������\n[0m",leader);
                                                        }
           else
              message_vision("[1m���ɽ����󲻹����죬�޷��������Ž���\n[0m",leader);
	  }

	else if( sizeof(member) == 4 )
	 {
            if(leader->query_skill("sha-array",1) >= 60){
	    if( leader->query("sen",1) >= 100)
	      { 
	       message_vision( HIG "$N��������չ������������\n" NOR, leader);
	       leader->add("sen",-100);
               leader->set_temp("form_mean",mean);
               leader->set_temp("form_number",number);
	       doing_array(member,leader);
	      }
	     else
	       message_vision("[1m�㾫������������������\n[0m",leader);
                                                         }
           else
              message_vision("[1m���ɽ����󲻹����죬�޷�����������\n[0m",leader);

	  }
	 else if( sizeof(member)==8)
	 {
            if(leader->query_skill("sha-array",1) >= 80){
            if( leader->query("sen",1) >= 200)
	     {
	      message_vision( HIG "$N��������չ��������������\n" NOR, leader);
	       leader->add("sen",-200);
               leader->set_temp("form_mean",mean);
               leader->set_temp("form_number",number);
	       doing_array(member,leader);
	      }
	    else
	       message_vision("[1m�㾫������������������\n[0m",leader);
                                                        }
           else
              message_vision("[1m���ɽ����󲻹����죬�޷�����������������\n[0m",leader);
         }          
          return 1;
         
}      

void doing_array(object *member,object leader)
{
          int i,mean,number;
          
          mean=leader->query_temp("form_mean",1);
          number=leader->query_temp("form_number",1);
          for(i= 0; i< sizeof(member);i++)
          if(present(member[i]->query("id"),environment(leader)))
            {
             member[i]->set_temp("use_form",1);
             member[i]->add_array_armor;
             }
       leader->start_call_out( (: call_other, __FILE__, "remove_array",
           member,leader,mean,number:), random(10)+leader->query_skill("sha-array",1));
}

void remove_array( object *member,object leader,int mean,int number)
 {
    int i;
   if(leader->query_temp("use_form",1))
   {
     message_vision("[1m$NͻȻ����һ�֣����Ѳ����󣬱������顣\n[0m",leader);
     for(i=0; i<sizeof(member);i ++){
       if(!member[i]) continue;
       member[i]->delete_temp("use_form",1);
       member[i]->sub_array_armor;
                                    }
   }
    
  } 

  
