// superforce.c
#include <ansi.h>
inherit SKILL;
inherit SSERVER;

int valid_enable(string usage) { return usage=="force"; }
int valid_learn(object me)
{
      
    if( me->query("max_force") < 1500 ) 
    {
        tell_object(me, "���������Ϊ����, ����Ҫ��һǧ��ٵ㡣\n");
        return 0;
    }

    if( !me->query("quests/white-crystal") ) 
    {
        tell_object(me, "����δ�õ�����ˮ��, ����޷��������㡣\n");
        return 0;
    }

    // ǰ�Ĳ�û���ع�, ���ұ����Ƚ��ˮ��֮����, Ӧ����.  by hana
    if( me->query("family/master_name") == "˾���" || me->query("family/master_name") == "���" || me->query("family/master_name") == "˾ͽ��" || me->query("family/master_name") == "˾ͽ֪��" || me->query("family/master_name") == "�ܬL�" || me->query("family/master_name") == "����ʫ" || me->query("family/master_name") == "������") 
    {
      if( me->query_skill("superforce",1) < 40 )
      {
          return 1;
      }
      else
      {
          tell_object(me, "[36m����λ����ֻ�ܹ�ѧ��[���챦��]�ĵ��Ĳ��ķ���[0m\n");
          return 0;
      }
    }

    if( me->query("family/master_name") == "��������" || me->query("family/master_name") == "ִ������" || me->query("family/master_name") == "���ɳ���" ) 
    {
      if( me->query_skill("superforce",1) <80)
      {
          return 1;
      }
      else
      {
          tell_object(me, "[36m����λ���̳���ֻ�ܹ�ѧ��[���챦��]�ĵ�����ķ���[0m\n");
          return 0;
      }
    }

    if( me->query("family/master_name") == "��֥֥" || me->query("family/master_name") == "������" || me->query("family/master_name") == "�ֺ���")
    return 1;

      //��������ֻ�ܵ�80
      if( me->query_skill("superforce",1) < 100)
    {
        return 1;
    }
    else 
    {
        tell_object(me, "ֻ�и�ʥ��̻̽ʻ��Ǿ�ѧϰ����ѧ��ȥ.\n");
        return 0;
    }
}

int practice_skill(object me)
{
    return notify_fail("�����ķ�ֻ����ѧ�ģ����Ǵ�(exert)�л�������ȡ�\n");
}
string perform_action_file(string action)
{
    return CLASS_D("prayer")+"/superforce/"+action;
}
string exert_function_file(string func)
{
    return CLASS_D("prayer")+"/superforce/"+func;
}
string color(object me)
{
	int sk;
	sk = me->query_skill("superforce",1);
	if (sk < 31) return HIW"������"NOR;
	if (sk < 41) return HIM"õ��ϼ"NOR;
	if (sk < 51) return YEL"������"NOR;
	if (sk < 61) return HIC"��ѩ��"NOR;
	if (sk < 81) return MAG"���Ǻ�"NOR;
	if (sk < 111) return WHT"������"NOR;
	if (sk < 151) return HIB"��Ժ�"NOR;
	if (sk <201 ) return HIY"����"NOR;
	if (sk <251 ) return HIR"Ѫ��"NOR;
	return HIG"������"NOR;
}
