//by Casey
inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());   
        set("short",MAG"�ص�����"NOR);
        set("long", @LONG
������һ������ޱȵķ��䣬������ȫ�������Ÿ�ʬ��ŧѪ��ζ��
һ�����񱻵��ϵĶ������赹���������һ��ȴ�����˺ü��ں���
ԭ������һ����צ������������һ��Ҳ��������֪��������...
LONG
        );       
  set("light_up", 1);
 set("evil", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"f-5",
 "east" : __DIR__"f-1",
 "west" : __DIR__"f-6",

]));
  set("no_transmit",1);
  set("no_auc",1);
 set("objects", ([ /* sizeof() == 1 */
  "/open/mogi/dragon/obj/dragon-1" : 1,
]));
  
  setup();
}
void init()
{
 add_action("free_dragon","free");
}

int free_dragon(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("dragon",environment(ob)))
    return notify_fail("ʲô������û�У�������ʲô��\n");
  if( str!="dragon")
    return notify_fail("��Ҫ�ͷ�ɶѽ��\n");
  if( ob->query("force") > 1500)
 {
  message_vision(HIW"$N����ȫ���ھ�����"HIB"��������\n"NOR,ob);
ob->set("kill_dragon",1);
  write("\n");
     ob1=present("dragon",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
  }
  else
  {
   message_vision(HIW"$N�����ھ���Ҫ����"HIB"��������"HIW"����������
���㷴������������!!\n"NOR,ob);
   ob->add("kee",-150);
   return 0;
  }
}
int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision(HIM"\nֻ���ƽ������Ƭ���� ,��������������ͻȻ�䱬�������\n"NOR,ob);
  call_out("msg2",3,ob);
  return 1;
}
int msg2(object ob)
{
  object ob1;
  message_vision(HIY"\n�ƽ���������һ�� ,�����������Ӵ������\n"NOR,ob);
 
  
  ob1=new("/open/mogi/dragon/npc/dragon-gold");
  ob1->move("/open/mogi/dragon/f-0");
  ob1->set("kill_dragon",1);
  message("mud",HIB"\n\n  ��ؾ����� ,��ˮ���ڲ��� ,��������� ...\n\n\n\n"NOR,users());
  call_out("msg3",3,ob);
  return 1;
}
int msg3(object ob)
{
 message("mud",HIR"    ��ңԶ"CYN"ħ��"HIR"�����������˺��� ,���ǿ�ʼ����...\n
          ���ϵ����޵������� ,���統�����ߵ���ͷ��?!\n\n\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud",HIW"\n  �����W����һ�����"+HIB+"���"+HIW+" ,����һ����"+HIB+"���"+HIW+"���Ӳ�Ϣ...\n
  ��԰����ˮ���ߵ�������ĬĬ������ ,Զ��ħ���"+HIY+"����"+HIW+"ѽ...\n"NOR,users());
  return 1;
}



