inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
        seteuid(getuid());
        set("short",CYN"����"NOR);
        set("long", @LONG

���߽�һ��������ʪ��С���䣬����ζ��������������ʬ�㣬������
������ϰ�ߺڰ������Ȼ�����и��˱������������֫��������
ס�����ù�Ҳ�������ᴩ��������ͷ��Ҳ��������֪�������ǻ

LONG
        );
        set("light_up", 1);
        set("no_transmit",1);
        set("no_auc",1);
        set("objects", ([ /* sizeof() == 1 */
            "/open/snow/obj/sa1.c" : 1,
]));
set("exits",([
"out":"/open/center/room/inn",
]));
  setup();
}
void init()
{
 add_action("free_sa","free");
}
int free_sa(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("sa",environment(ob)))
    return notify_fail("���ֲ��ڣ����ʲô��\n");
  if(str != "sa")
    return notify_fail("��Ҫ�ͷ�˭ѽ��\n");
  if( ob->query("force") > 1500)
  {
message_vision(HIW"$N����ȫ����������"HIC"ħѪ����"HIW"��\n"NOR,ob);
  ob1=present("sa",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  }
  else
  {
message_vision(HIW"$N����������Ҫ����"HIC"ħѪ����"HIW"�������������㱻�����ϵ��������֡�\n"NOR,ob);
   ob->add("kee",-200);
  }
return 1;
}
int msg1(object ob)
{
message_vision(HIR"\nֻ�������������������۾��������˵ĺ�⡣\n"NOR,ob);
 call_out("msg2",3,ob);
  return 1;
}
int msg2(object ob)
{
  object ob1;
message_vision(HIW"\n�����ӵ���������лл������\n"NOR,ob);
message_vision(HIW"\n������˫������һ�������һ���������Ϸ������һ���󶴣������Ծ��ȥ��\n"NOR,ob);
set("exits/up","/open/snow/room/back");
message("mud",HIC"\n������Ц����"HIW"�������������������ˣ�ͽ���Ǹ���һ��ȥ��ƽħ���ɡ�\n"NOR,users());
  call_out("msg3",3,ob);
  return 1;
}
int msg3(object ob)
{
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/su3");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/su3");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/su3");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/sushop");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/sushop");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road4");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road4");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road4");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road3");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road3");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room1");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room1");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room1");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room9");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room9");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room9");
 new("/open/snow/npc/fbandit")->move("/open/gblade/room/secret");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
message("mud",HIC"\n��ȫ��̾�����������������ⳡ"HIR"Ѫս"HIC"�ⲻ�ˣ�ֻ�ü����ս������ѩ���ˡ�\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud",HIR"\nĪ�޳�Ŀ¶�׹⣺�ɶ񣡲�֪��˭�����ų�����Ȼ��ˣ�\n"NOR,users());
message("mud",HIR"\nħ����ͽ������ɱ�Ӱɣ���ѩ�Դ���������Ԩ��ɱ��Ƭ�ײ�����\n"NOR,users());
return 1;
}
