inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",CYN"����"NOR);
        set("long", @LONG
���߽�һ��������ʪ��С���䣬�ս�����ʱ�����һƬ��ڣ�����
�۾�����ϰ�ߺڰ������Ȼ�����и��˱������������֫��������
ס�����ù�Ҳ�������ᴩ��������ͷ��Ҳ���������㲻֪�������ǻ�..
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/gen17",
]));
  set("light_up", 1);
  set("no_transmit",1);
  set("no_auc",1);
  set("need_key/south",1);
  create_door("south",HIB"��ɫ����"NOR,"north",DOOR_LOCKED);
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/obj/ya1" : 1,
]));
  setup();
}
void init()
{
 add_action("free_ya","free");
}

int free_ya(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("ya",environment(ob)))
    return notify_fail("��ȥ¥���ˣ��㻹��ʲô��\n");
  if( str!="ya")
    return notify_fail("��Ҫ�ͷ�˭ѽ��\n");
  if( ob->query("force") > 1500)
  {
  message_vision(HIW"$N����ȫ����������"HIC"��������"HIW".........\n"NOR,ob);
  ob->set("get_head",1);
  write("\n");
     ob1=present("ya",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
  }
  else
  {
   message_vision(HIW"$N����������Ҫ����"HIC"��������"NOR"�������������㱻�����ϵĺ�������!!\n"NOR,ob);
   ob->add("kee",-250);
   return 0;
  }
}
int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("ֻ��Ҷ���������������Ϸ������Ѱ������\n",ob);
  call_out("msg2",3,ob);
  return 1;
}
int msg2()
{
object freeer=this_player();
  message_vision("Ҷ���: С��лл����.....\n\n",freeer);
  message_vision("Ҷ��˫������һ�������һ��!!�����Ϸ������һ���󶴣����˳�ȥ��\n", freeer) ;
  set("exits/up","/open/ping/room/road4");
/*  
  ob1=new("/open/wu/npc/ya");
  ob1->move("/open/main/room/m11");
  ob1->set("get_head",1);
*/
  message("mud",HIC"ֻ��"HIW+freeer->query("name")+HIC"ͻ�������ѹ�,�Ա�����Ϊ����Ҷ��ĺ�������\n\n"NOR,users());
  message("mud",HIC"Ҷ��������:"HIW"��������!!��������!!�����ʱ������������\n\n"NOR,users());
  call_out("msg3",3,freeer);
  return 1;
}
int msg3(object ob)
{
object ob1;
ob1=new("/open/wu/npc/ya");
ob1->move("/open/main/room/m11");
ob1->set("get_head",1);

 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom1");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom1");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom3");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom3");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom3");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom4");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom4");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom7");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom7");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom7");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom4");
 message("mud",HIC"\n�� ɱ���:"HIW
               "���˹ȵĆ����ǡ���������ɽ�������г����ɣ�����\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud",HIR"\n֣ʿ��̾��:
         ˭������������ֺƽ��أ�����\n\n"NOR,users());
  return 1;
}
