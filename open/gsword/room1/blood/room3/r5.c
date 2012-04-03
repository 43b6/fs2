#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
set ("short",HIC"��������������"NOR);
set ("long", @LONG
�����Ǵ�˵�з�ӡѪħ֮�������������ģ�����һ����������ǰ�㿴������������֮��Ӱ����Ӱ�γ�һ����״�������Ƿ�ӡ���룬�ƺ�����һ���ˣ���������Ѫ��U���ƺ��ޱ�������
LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc1/cking" : 1,
]));
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 2 */
"back":"/open/common/room/inn.c",
]));
  set("no_transmit", 1);
  setup();
}

void init()
{
add_action("do_search","search");
add_action("do_check","put");
}
int do_search(string str)
{
  object ob;
  ob=this_player();
message_vision("
�㶨��һ���������ƺ������ɽ���������ڻ��ϵ�Ѫħ���������һ��˻��㷢�������������и���һ��Բ�ο׶����ƺ����Է���ʲô������\n",ob);
  return 1;
}

int do_check(string str)
{
 mapping weapon = ([
 "swordball in sun_fire_sword" : 1,
 "bladeball in bird_blade" : 2,
 "penball in liyu_pen" : 3,
 ]);
 object ob=this_player();
 object ob1;
 string name,str1,str2;
 if( !str || sscanf(str, "%s %s", str1, name) != 2 )
  {
   message_vision("�� put xxx in xxx\n",ob);
  }
 else if(weapon[str] && ob->query("class")=="swordsman")
  {
   message_vision(HIW"�㽫����������������.��ʱ�������俦Ȼ����\n"NOR,ob);
   if(weapon[str]==1) ob->set_temp("su1",1);
   if(weapon[str]==2) ob->set_temp("su2",1);
   if(weapon[str]==3) ob->set_temp("su3",1);
  }
 else
  {
   message_vision(HIW"�㴥������-����������һ��ҫ�۵Ĺ�â!!!\n"NOR,ob);
   ob->unconcious();
   return 0;
  }
 if(ob->query_temp("su1")==1&&ob->query_temp("su2")==1&&ob->query_temp("su3")==1)
  {
   log_file("sword/blood",sprintf("%s(%s) free bloodking on %s\n",ob->query("name"),ob->query("id"),ctime(time()) ));
   tell_object(users(),HIC"Ѫħ��Ц�� : ����~~���������ƽ��ɽ���������������\n\n"NOR,ob);
   ob1 = present("bloodking",this_object());
   destruct(ob1);
   call_out("msg1",3,ob);
   return 1;
  }
}


int msg1(object ob)
{
   tell_object(users(),HIY"Ѫħŭ�� :"HIR" ħ������ʥ��壬Ѫ��������ħ��\n\n"NOR,ob);
   tell_object(users(),HIR"           ��Ѫħ�������Һ��ѪȾ���֣�\n\n"NOR,ob);
   new("/open/gsword/npc2/bknight")->move("/open/capital/room/r70");
   new("/open/gsword/npc2/bknight")->move("/open/capital/room/r70");
   new("/open/gsword/npc2/bknight")->move("/open/gsword/room/su3");
   new("/open/gsword/npc2/bknight")->move("/open/gsword/room/su3");
   new("/open/gsword/npc2/bknight")->move("/open/ping/room/road4");
   new("/open/gsword/npc2/bknight")->move("/open/ping/room/road4");
   new("/open/gsword/npc2/bknight")->move("/open/start/room/s5");
   new("/open/gsword/npc2/bknight")->move("/open/start/room/s5");
   new("/open/gsword/npc2/bknight")->move("/open/port/room/r3-1");
   new("/open/gsword/npc2/bknight")->move("/open/port/room/r3-1");
   new("/open/gsword/npc2/bknight")->move("/open/wind-rain/room9");
   new("/open/gsword/npc2/bknight")->move("/open/wind-rain/room9");
   new("/open/gsword/npc2/bknight")->move("/open/prayer/room/westarea/road29");
   new("/open/gsword/npc2/bknight")->move("/open/prayer/room/westarea/road29");
   new("/open/gsword/npc2/bknight")->move("/open/main/room/r5");
   new("/open/gsword/npc2/bknight")->move("/open/main/room/r5");
   new("/open/gsword/npc2/bknight")->move("/open/snow/room/room3");
   new("/open/gsword/npc2/bknight")->move("/open/snow/room/room3");
   new("/open/gsword/npc2/bknight")->move("/open/capital/room/r15");
   new("/open/gsword/npc2/bknight")->move("/open/capital/room/r15");

   call_out("msg2",3,ob);

   return 1;
 }

int msg2(object ob)
{
  message_vision(HIY"�㿪��ӡ������Ҳû�취���ɽ����˰ɣ��㵽ħ�������ң��ҽ���һ�������������������ġ�Ѫħ�Խ�ʽ����\n"NOR,ob);
  ob->set("title",HIW"��"HIR"ħ"HIC"ؽ"HIY"����"HIW"��"NOR);
  ob->set("family/family_name","Ѫħһ��");
  message_vision(HIC"  ...������а�御ͷ���и�ħ������͵������ɡ� \n",ob);
  ob->set("bloodsword",2);
  ob->set("return",1);
  return 1;

}

