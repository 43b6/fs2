inherit SKILL;
#include <ansi.h>
#include <array.h>
int mean;
int valid_enable(string usage) { return usage=="array"; }
void doing_array(object *member,object leader);
int form_array(object leader)
{
        object *member;
        int i,bandit=0,mean=0;
        int enable_array=0;
        int number;
        member = leader->query_team();
        if( sizeof(member) == 2)
             number = 2;
        else if( sizeof(member) == 3)
             number = 3;
        else if( sizeof(member) == 4)
             number = 4;
        else if (sizeof(member) == 5)
             number = 5;
        else
             return notify_fail("���ֻ�ս������û�����о������� !\n");
        if( leader->query_temp("use_form",1) )
             return notify_fail("�������ڴ��ս��\n");
        for(i=0;i<sizeof(member);i++)
        if ( sizeof(member) == 2)
        {
if( leader->query("sen",1) > 30 && leader->query("bellicosity",1) > 50)
            {
              message_vision("[1;32m$N���һ�� ,ʩ���˶���а���е�[1;33m�Ǳ�Ϊ�� ,\n[1;32m���ͬ��˲�仯��������Ӱ����ֳ�ȥ��[0m\n",leader);
              leader->add("sen",-20);
              doing_array(member,leader);
             }
           else
              message_vision("�㾫���������Դ��ս\n",leader);
         }

        else if( sizeof(member) == 3)
         {
if( leader->query("sen",1) > 45 && leader->query("bellicosity",1) > 100)
              {
               message_vision("[1;32m$Nָʾ�������ҿ�ܣ�ʩչ����а���е�[1;34m�����û ,\n[1;32m˲�佫���˰�Χס��\n[0m\n",leader);
               leader->add("sen",-35);
               doing_array(member,leader);
              }
             else
               message_vision("�㾫���������Դ��ս\n",leader);
          }

        else if( sizeof(member) == 4)
         {
if( leader->query("sen",1) > 50 && leader->query("bellicosity",1)> 150)
              {
               message_vision("[1;32m$N��������ʩչ����а���е�[1;35m�����Ӵ�\n[1;32m��һ˲�������������ߡ�[0m\n",leader);
               leader->add("sen",-40);
               doing_array(member,leader);
              }
             else
               message_vision("�㾫���������Դ��ս\n",leader);
          }
        else if (sizeof(member) == 5)
         {
if( leader->query("sen",1) > 70 && leader->query("bellicosity",1)> 200)
             {
              message_vision("[1;32m$N��������ʩ������а���е�[1;31m�ٹ�ҹ�� ,\n[1;32m��Ȼ���Ʊ�ɫ����ɳ�ܷɡ�[0m\n",leader);
               leader->add("sen",-60);
               doing_array(member,leader);
              }
            else
               message_vision("�㾫���������Դ��ս\n",leader);
         }
          return 1;

  }

void doing_array(object *member,object leader)
{
          int i;
          leader->set_temp("use_form",1);
          for(i= 0; i< sizeof(member);i++)
          if(present(member[i]->query("id"),environment(leader)))
            {
             member[i]->set_temp("use_form",1);
             }
       leader->start_call_out( (: call_other, __FILE__, "remove_array",
           member,leader :), 1+leader->query_skill("bad-array",1)/2);
}

void remove_array( object *member,object leader)
 {
    int i;
   if(leader->query_temp("use_form",1))
   {
     message_vision("[1;37m$NͻȻ����һ�֣���ʧ������������������������[0m\n",leader);
     for(i=0; i<sizeof(member);i ++)
       member[i]->delete_temp("use_form",1);
   }
  }
