// study.c

#include <skill.h>

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
        object ob;
        mapping skill;
        int cost, intt, literate,repeat,i;
        string name;

        repeat=0;
        if( me->is_fighting() )
                return notify_fail("���޷���ս����ר�������ж���֪��\n");
        if(!arg)
                return notify_fail("��Ҫ��ʲô��\n");

        if(sscanf(arg,"%d %s",repeat,name)==2)
                arg=name;

        if(!repeat) repeat=1;

        if(!arg || !objectp(ob = present(arg, me)) )
                return notify_fail("��Ҫ��ʲô��\n");

        if( !mapp(skill = ob->query("skill")) )
          return notify_fail("�ⶫ�������������ؼ�, ���޷�����ѧ��������\n");

        if( !(literate=me->query_skill("literate", 1)) )
                return notify_fail("���Ǹ���ä����ѧѧ����ʶ��(literate)�ɡ�\n");

        if ( (int)me->query("combat_exp") < skill["exp_required"] )
          return notify_fail ("���ʵս���鲻�㣬����ô��Ҳû�á�\n");

        if( !SKILL_D(skill["name"])->valid_learn(me) )
          return 0;
          //notify_fail("����Ŀǰ����������û�а취ѧ������ܡ�\n");
// fix by Onion.
// skill ��� valid_learn() ����д notify_fail(), Ӧ�� skill �������ͺá�
        if (ob->valid_learn(me)<0)
          return notify_fail ("��˵�㻹�������������!\n");

        cost = skill["difficulty"] - (intt=(int)me->query("int"));
        if (cost < 0) cost = 0;
        cost = -literate/10+skill["sen_cost"] + skill["sen_cost"]  * cost/20;
        if( cost < 0 ) cost = skill["sen_cost"];
        if(me->query("class")=="scholar")
                cost=cost*2/3;
        for(i=0;i<repeat;i++)
        {
        if( (int)me->query("sen") < cost ) {
                write("�����ڹ���ƣ�룬�޷�ר�������ж���֪��\n");
                return 1;
        }

        if( me->query_skill(skill["name"], 1) > skill["max_skill"] )
          return notify_fail ("�㷢��������˵�Ķ�����Զ�̫ǳ�ˡ�\n");

        me->receive_damage("sen", cost);

        if( !me->query_skill(skill["name"], 1) )
                me->set_skill(skill["name"], 1);
        else {
          // Modify By chun 95/10/27
          // ��literate��Ӱ���Ϊ��int��Ӱ��
          // wade fix in 1/4/1996, ��Ϊ��� literate �� ���� ����
          intt = intt/2;
          me->improve_skill(skill["name"], literate/10+random(intt)+5);
          if(me->query("class")=="scholar")
                me->improve_skill(skill["name"], literate/10+random(intt)+5);
        }

        message("vision", me->name() + "��ר�ĵ��ж�" + ob->name()
                + "��\n", environment(me), me);

        write("���ж��й�" + to_chinese(skill["name"]) + "�ļ��ɣ��ƺ��е��ĵá�\n");
        }
        return 1;
}

int help(object me)
{
   write( @HELP
ָ���ʽ : study <��Ʒ����>
ָ��˵�� :
           ���ָ��ʹ����Դ����Ż�������Ʒ��ѧĳЩ����,
           ��ǰ����: �㲻���Ǹ�����ä����
�����ο� :
           learn
HELP
   );
   return 1;
}
