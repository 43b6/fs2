#include <room.h>
#include <ansi.h>
inherit ROOM;
 int done,done1,done2;
void create ()
{
    seteuid(getuid()); 
  set ("short",HIC"��ӡ��"NOR);
  set ("long", @LONG
��ͨ���ܵ�֮������ǰ������������񣬵��������Ľ��ۣ���Լ��
�о���һ�ɸ�Ӳ֮����������������(statue)֮�⣬����һ�������ʯ�ţ���
�����������ŷ���.�ƺ��ڷ�ӡ�ż�����Ķ������ű���һʯ��(stone)��
ʯ���Ϻ��ƿ��ж�������

LONG);

 set("item_desc", ([ /* sizeof() == 2*/
  "stone" :"��ң�ӷ�ӡ��ħ�ڴˣ�\n",
  "statue" : "�����ŵ������а�����һλ����(sworder)������(blader)������(scholar)..�������������ƺ����и��ۼ���.��֪����ʲô�õġ�\n"]));
 set("exits", ([ /* sizeof() == 1 */
  "back":"/open/common/room/inn.c",
 ]));
 set("no_auc", 1);
 set("no_transmit", 1);
setup();
}
void init()
{
 add_action("do_search","search");
 add_action("do_enter","put");
}

int do_search(string str)
{
  object ob,ob1;

  ob=this_player();
  if( str != "statue" )
  return notify_fail("����ȫѰ�Ҳ����κ���״!!!\n");
  else
  message_vision("���������찵�ã�����ÿ�������������εİ�����\n",ob);
  return 1;
}

int do_enter(string str)
{
 mapping weapons = ([
  "sun_fire_sword in sworder" : 1,
  "liyu_pen in scholar" : 2,
  "bird_blade in blader" :3,
 ]);
 object ob=this_player();
 string stones,name,str1;
 if(ob->query("highsworder")==1)
  return notify_fail("���ѿ�����ӡ�ˣ���\n");
 if((weapons[str]==1)&& (ob->query("class")=="swordsman"))
  {
  ob->set_temp("qsword",1);
    if( done== 0 )
      {
      message_vision(HIW"�������������񣬶�ʱ����¸����죡\n"NOR,ob);
      message_vision(HIW"��ʱ���ɰ���������һ�������ε�����,һ����С��$N�Ա���������������롭�ն��ڡ���\n\n\n"NOR,ob);
      ob->move("/open/gsword/second/room/sword/s1.c");
      message_vision(HIW"$N�����������������ʧ���١���\n"NOR,ob);
      }
   else
    message_vision("������޷�Ӧ...\n",ob);
   done = 1;
  return 1;
  }
 if((weapons[str]==2) && (ob->query("class")=="scholar"))
 {
  ob->set_temp("qsword",1);
   if( done1== 0 )
      {
       message_vision(HIW"�������������񣬶�ʱ����¸����죡\n"NOR,ob);
       message_vision(HIW"��ʱ���ɰ���������һ�������ε�����,һ����С��$N�Ա���������������롭�ն��ڡ���\n\n\n"NOR,ob);
       ob->move("/open/gsword/second/room/sch/sc1.c");
       message_vision(HIW"$N�����������������ʧ���١���\n"NOR,ob);
      }
    else
    message_vision("������޷�Ӧ...\n",ob);
   done1=1;
  return 1;
  }
 if((weapons[str]==3) && (ob->query("class")=="blademan"))
  {
  ob->set_temp("qsword",1);
  if( done2== 0 )
      {
       message_vision(HIW"�������������񣬶�ʱ����¸����죡\n"NOR,ob);
       message_vision(HIW"��ʱ���ɰ���������һ�������ε�����,һ����С��$N�Ա���������������롭�ն��ڡ���\n\n\n"NOR,ob);
       ob->move("/open/gsword/second/room/blade/b1.c");
       message_vision(HIW"$N�����������������ʧ���١���\n"NOR,ob);
      }
     else
    message_vision("������޷�Ӧ...\n",ob);
   done2=1;
  return 1;
  }
 else
 {
  message_vision(HIR"�󴥻��ء�..���ӡ���ɣ�\n"NOR,ob);
  ob->unconcious();
 }
return 1;
}
