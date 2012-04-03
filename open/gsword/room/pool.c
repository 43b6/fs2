#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
set ("short","�ص�");
set ("long", @LONG
�������ڵ������Ҫ̽��������ʹ����ǧ��׹ֱ���³�����һ
����Ǳ���صף�ͻȻˮ���д���һ��Ӥ������������ˮ��һ��������
�ӿ��ǰ�����ŵ��ˣ�ԭ����������������һ��ȫ����ɫ���㣬��
Ĭ�����ž��Ǵ�˵�е��������˰�!!
LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc1/wawafish" : 1,
]));
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 2 */
                "up": "/open/gsword/room/road1",
]));
  set("no_transmit", 1);
  setup();
}

void init()
{
add_action("do_search","search");
add_action("do_check","give");
}
int do_search(string str)
{
  object ob;
  ob=this_player();
message_vision("
�㶨��һ�����ѵ�����Ǵ�˵�е�������?? ���ͷ���������Բ�ο׶����ƺ����Է���ʲô������\n",ob);
  return 1;
}

int do_check(string str)
{
 mapping weapon = ([
 "wawafish goldball" : 1,
 "wawafish fireball" : 2,
 "wawafish waterball" : 3,
 "wawafish woodball" : 4,
 "wawafish soilball" : 5,
 ]);
 object ob=this_player();
 object ob1;
 string name,str1,str2;
 if( !str || sscanf(str, "%s %s", str1, name) != 2 )
  {
    message_vision("�� give xxx xxx\n",ob);
  }
 else if(weapon[str] && ob->query("class")=="swordsman")
  {
   message_vision(HIW"�㽫�������������ͷ����.��ʱ�����ڴ���һ��\n"NOR,ob);
   if(weapon[str]==1) ob->set_temp("su1",1);
   if(weapon[str]==2) ob->set_temp("su2",1);
   if(weapon[str]==3) ob->set_temp("su3",1);
   if(weapon[str]==4) ob->set_temp("su4",1);
   if(weapon[str]==5) ob->set_temp("su5",1);

  }
 else
  {
   message_vision(HIW"�㴥������-���ܿ�����֮����,˲�����й�ӡ����������һ��ҫ�۵Ĺ�â!!!\n"NOR,ob);
   ob->unconcious();
   return 0;
  }
 if(ob->query_temp("su1")==1&&ob->query_temp("su2")==1&&ob->query_temp("su3")==1&&ob->query_temp("su4")==1&&ob->query_temp("su5")==1)
  {
   log_file("sword/yao",sprintf("%s(%s) free yao on %s\n",ob->query("name"),ob->query("id"),ctime(time()) ));
   tell_object(users(),HIC"��ң��ϲ�� : �����ɽ�..�������˽⿪�ҳ��������ķ�ӡ��...����\n\n"NOR,ob);
   ob1 = present("wawafish",this_object());
   destruct(ob1);
   call_out("msg1",3,ob);
   return 1;
  }
}
int msg1(object ob)
{
   tell_object(users(),HIY"ңԶħ����������죡����\n\n"NOR,ob);

   call_out("msg2",3,ob);
   return 1;
 }

int msg2(object ob)
{
   tell_object(users(),HIY"Ѫħ��Ц�� : �ɽ���������⣬����ҷ�ӡ���ƣ�\n\n            ���㻹�б����ڷ���һ����??\n\n            ��~  ��~~  ��~~~  \n"NOR,ob);
   tell_object(users(),HIY"��ң��̾�� : ��~~��������գ��ӽ��𣬷����ɽ�����ȫ���Կ�Ѫħһ�� \n"NOR,ob);
   call_out("msg3",3,ob);
   return 1;
 }
int msg3(object ob)
{
  message_vision(HIY"����������������Ե���㵽�ɽ���ɽ��ʥ�������Ұ�..���������½����㡣\n"NOR,ob);
  ob->set("quests/sunsword",1);
  ob->set("return",1);
  return 1;

}
