#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_SPELL;
void create() {seteuid(getuid());}
int cast(object me, int number,string name)
{
  
	object mob,room=environment(me),weapon;
	int needlevel, manacost,spell,invcost,i,funlvl;
	string filename;

  if( !me->is_fighting() )
       return notify_fail("ս���в����ٻ�����\n");
  if(!me->query("spells/invocation/level") ) 
       return 0;
  if (!objectp (weapon = me->query_temp ("weapon")) ||
                  weapon->query("skill_type") != "whip")
       return notify_fail("����װ������!!\n");

  if( me->query("class")!= "taoist" )
       return notify_fail("ֻ�е�ʿ���õĳ����ַ�����\n");
	   if(me->query_temp("have_hawk"))
        return notify_fail("һ��ֻ���ٻ�һ���!\n");
  if( me->query("sen") < 30 )
       return notify_fail("��ľ����޷����У�\n");	
	me->start_busy(1);
	filename = __DIR__"npc/" + name;
	if( file_size(filename+".c") < 0 )
		return notify_fail("û�����ֶ����ɹ��л���\n");
	needlevel= filename->needlevel ();
        manacost = (filename->manacost ())*number;
	invcost = (filename->invcost ())*number;
        spell = me->query_skill("spells");
	funlvl = me->query ("spells/invocation/level");
/*     
  if(filename== __DIR__"npc/king" && me->query("quests/supertao")!=1) {     
     return 0;
  }
*/
  if (funlvl < needlevel ) {
     write("��������ȼ���������....���ֹ������ٻ�����!!\n");
     return 1;
  }
  if( me->query_temp ("invocation")+invcost > spell/2) {
     write("���Ѿ��ٻ�̫���ˣ�ȥ���������ͼ����������ٻ���Ŀ��!!\n");
     return 1;
  }
  if (!needlevel) {
     write("û��λ����\n");
     return 1;
  }

  if (me->query ("mana") < manacost) {
     write("��ķ����Ѿ��ľ�....\n");
     return 1;
  }
  message_vision("\n\n$N�૵����˼������\n", me);
  if( funlvl < 100 )
  spell_improved ("invocation", random(funlvl*10) );
  me->receive_damage("sen",random(25));
  me->add ("mana", -manacost);
  me->start_busy(1); 
  for(i=0;i < number;i++) {
  seteuid(getuid());
  mob = new(filename);
  mob->move (room);
  mob->besummon(me,room);
 }  
  return 1;

}
