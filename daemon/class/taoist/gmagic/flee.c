#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
void remove_flee (object me);
int conjure(object me,object target)
{
	object *enemy;
	int memove,enemymove,funlvl;
        mapping exit=environment(me)->query("exits");
        string *dirs;
        int i;
        dirs=keys(exit);
        i=random(sizeof(dirs));
        if(!exit[dirs[i]]) return notify_fail("��·����ס��, �������Լ��ξͺ���!!\n");
        load_object(exit[dirs[i]]);
        if(!me->query("spells/flee/level"))
        return 0;
        if(me->query("class")!="taoist")
        return 0;
        if(!me->is_fighting())
          return notify_fail("����û��ս������ʲô��?\n");
	if(me->query_temp("tt"))
		return notify_fail("��ķ�����δʩ��!!");
        if( me->query_skill_mapped("dodge") != "g-steps")
          return notify_fail("��û������ɵĶ����Ṧ���޷�ʹ�������ݡ���\n");

        if(!exit)
	return notify_fail(HIW"�����޴�����!!\n"NOR);
        message_vision(HIY"$Nʹ�����Ŷݼ�֮�����ݡ���\n"NOR,me);
		
	funlvl = me->query("spells/flee/level");
	if( random(funlvl+100) > random(100) )
          {
            message_vision(HIW"ֻ��$Nգ�ۼ��Ѳ�֪ȥ��\n"NOR,me);
            me->move(exit[dirs[i]]);
          }
        else
          {
            message_vision(HIY"��ϧ$N�������������ʧ���ˡ�\n"NOR,me);
            me->start_busy(1);                        
	  }
	
	if( me->query("spells/flee/level") < 100 )	
	spell_improved ("flee", random(funlvl*5)+100);
//me->start_call_out((: call_other, __FILE__, "remove_flee", me :),2);
	return 1;
}

void remove_flee (object me)
{

me->delete_temp ("tt");
  
  return;
}
