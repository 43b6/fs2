inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
        seteuid(getuid());
        set("short","����");
        set("long", @LONG

���߽�һ��������ʪ��С���䣬����ζ��������������ʬ�㣬������
������ϰ�ߺڰ����㿴���������һ�Ŵ���һ�����ӡ�����ǽ(wall)��
һ���������ŵ�é�ӣ���������������֩��˿�����Ȼ����������ǽ�ǵ�
С����(window)�Ա��и��˱��������������
LONG
        );
        set("no_fight",1);
        set("light_up", 1);
        set("no_transmit",1);
        set("no_auc",1);
  set("item_desc", ([ /* sizeof() == 2 */
  "window" : "    һ��ľ��С�������ɴ������⿴ȥ����������ͷ����һ��ˮ�أ��㲻
��ͻ�����룬�����������ȥ��jump���ǲ��ǱȽϿ��µ�һ¥����",
  "wall" : " �����ķ�֮�ھ� (words)
             ���޶����������ķ�֮��ѧ��ѧ֮�г���(read words)�ɽ������۽ᣬת
             �����������ھ�������ڤ������֮��ѧ��    perform fiendforce.fight
",
]));
        set("objects", ([ /* sizeof() == 1 */
            "/open/tendo/room/tower/npc/fiend.c" : 1,
]));
  setup();
}
void init()
{
 add_action("do_read","read");
 add_action("do_jump","jump");
 add_action("free_fiend","free");
}
int do_read(string str)
{
  object me=this_player();
  if(str!="words") {
  tell_object(me,"[1;32m����Ҫ��ʲô?[0m\n");
  return -1;
  }
  if(me->query_skill("fiendforce",1) > 1){
  tell_object(me,"[1;37m������Ѿ��������ķ��ˡ�[0m\n");
  return -1;
  }
  else {
  tell_object(me,"[1;37m������ǽ�ϵĿھ�����һ�飬����һ���죬��ѧ���������ķ���[0m\n");
  me->set_skill("fiendforce",1);
  return 1;
       }
}
int do_jump()
{
        object who;
    who = this_player();

        who->move("/open/center/room/inn");
tell_room(this_object(),"��ֻ����һ������,��"+
 "��һ��������������ȥ��\n");
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�������ɵش�����"HIR"������"HIW" !!\n"NOR,users());
        return 1;
}
int free_fiend(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("fiend",environment(ob)))
    return notify_fail("���ֲ��ڣ����ʲô��\n");
  if(str != "fiend")
    return notify_fail("��Ҫ�ͷ�˭ѽ��\n");
  if( ob->query("force") > 1000)
  {
message_vision(HIC"$N����ȫ��������������ǵ�"HIW"����"HIC"��\n"NOR,ob);
  ob1=present("fiend",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  }
  else
  {
message_vision(HIR"$N����������Ҫ�����ǵ�"HIW"����"HIR"�������������㱻�����ϵ��������������ˡ�\n"NOR,ob);
   ob->add("kee",-200);
  }
return 1;
}
int msg1(object ob)
{
message_vision(HIR"\nֻ��ڤ����������������ͻȻ����ǽ��ը�˿�����\n"NOR,ob);
 call_out("msg2",3,ob);
  return 1;
}
int msg2(object ob)
{
  object ob1;
message_vision(HIW"\nڤ�����޵���С���ӣ���л������\n"NOR,ob);
message_vision(HIW"\nڤ�����޵�һ�������������Ƕ����£���Ӱ������ʧ�������ǰ��\n"NOR,ob);
set("exits/up","/open/snow/room/back");
message("mud","[1;34m�����ʱ�����ܲ�...\n[0m",users());
  message("mud","[1;35mһ������ͻȻ�������ָ������䣡����\n[0m",users());
  message("mud","[1;32mڤ�����޽��������������������������������\n
                 ���ֵ��˸������ţ���������[0m[1m"+ob->query("name")+"[1;32m�İ�������ڤ�����޵������ֽ�����
                 һ���³�ɺޣ�������������˽���������\n
                 ��������������������\n
                 ����ɺ������ǰ����������Ϊ������ʿ�����������ǵĵ��ӣ�
                 ������Ѫϴ���ְɣ�\n\n[0m",users());
  call_out("msg3",3,ob);
  return 1;
}
int msg3(object ob)
{
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road4.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road4.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road2.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road2.c");
new("/open/tendo/room/tower/npc/monster")->move("/open/center/room/road1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road3.c");
new("/open/tendo/room/tower/npc/snake")->move("/open/gsword/room/su3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/gsword/room/sushop.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/gsword/room/sushop.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/capital/room/r70.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/capital/room/r70.c");
new("/open/tendo/room/tower/npc/yama")->move("/open/main/room/r19.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r12.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r12.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r10.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r10.c");
new("/open/tendo/room/tower/npc/plaguer")->move("/open/main/room/f11.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/f12.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/f12.c");
new("/open/tendo/room/tower/npc/villain")->move("/open/ping/room/road4.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road5.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road5.c");
new("/open/tendo/room/tower/npc/chieftain")->move("/open/ping/room/road6.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road10.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road10.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/soldier2.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/soldier2.c");
new("/open/tendo/room/tower/npc/goblin")->move("/open/ping/room/soldier1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/inn.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/inn.c");
new("/open/tendo/room/tower/npc/butcher")->move("/open/wu/room/school1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/wu/room/school1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t03.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t03.c");
new("/open/tendo/room/tower/npc/fiend")->move("/open/tendo/room/t03.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t04.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t04.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t02.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t02.c");
 
message("mud",HIG"\n\n�����������һ����������ǧ������⣬�����Ƿ��Ű��䵽�˼�....\n"NOR,users());
message("mud",HIR"\n�������:\n
                  ���������ػ����ɣ��˺�����׷������
                       ��ƽ�˼䣬�ؽ�ħ����������
                    ��ɷ�����������ǰ�����ʹ��....\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud","[1;36m½���̾����\n
                �ѵ������ǰ�ȷ�Ѫ��ĲҾ���Ҫ�ٴ�������
                ���ָ����ɣ������ֵ���Ҫ�Ž�һ�µ�ʱ���ˣ�
                �������Э������ڤ�����޸������൳��\n\n[0m",users());
 message("mud","[1;33m½���������Х��\n
                �������������֮λ���������ָ����ɣ����������޼��䵳���ߣ�\n
                ��ɱ���ۣ�����\n
                �ҽ�������������ɵ���׷ɱ����[0m[1m"+ob->query("name")+"[33m������\n[0m",users());
return 1;
}




