// Room: /u/d/dhk/room/richrm1.c-------------by dhk 2000.5.11
inherit ROOM;
#include <ansi.h>
#include <room.h>
#include </open/open.h>

void create ()
{
  set ("short", "����ɽׯ��ׯ�ſ�");
  set ("long", @LONG
�˵ؼ����������µ�һׯ֮�Ƶġ����ɽׯ�졣
������ׯ���������׸����������ɵй�����ׯ������
Ҳ����һЩ�������ޣ�����ɽׯ����Ī����һ������
��˵֮�ء���������ϸһ�ƺ��֣����������һ��
��լ���죬�������������Ȼ��������ɽɽ��֮�䣬
�൱���˲��졣����ƶ��Ǵ�˵�е�ɽׯ��Ȼ������
��ɽ���ˣ�ʵ�ں���������ѽ��

LONG);

  set("outdoors", "/u/d");
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/main/room/d7",
//  "enter" : "/u/d/dhk/workroom.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guard.c" : 1,
]));

  setup();
}
void init()
{
  //remove_call_out("lookhoho");
  call_out("lookhoho",1,this_player());
}
void lookhoho(object who)
{
  object box=new("/open/ping/questsfan/obj/box.c");
    int i,flag;
    mixed all;
    object obj,lee;

    flag=0;
    all=all_inventory(environment(who));
    for(i=0;i<sizeof(all);i++)
    {
    obj=all[i];
    if(obj->query("id")=="grandfather lee" && who->query_temp("goodman") && who->query_temp("box_ok")==0)
    {
    lee=obj;
    flag=1;
    }
    }
    if(flag)
    {
       tell_object(who,"лл�㻤���Ҽ���ү�������ǳ���л��\n");
       tell_object(who,"�Ҽ���ү�����ҽ���������㡣\n");
        box->move(who);
          who->set_temp("box_ok",1);
    destruct(lee);
    }
}
/*
int valid_leave(object who,string dir)
{
        if(dir=="enter"&&present("leespace guard",environment(who)))
  {
        if(who->query("goodman")!=1)
        {
        tell_object(who,"ɽׯ����ŭ�� : �����˵������ȥһ��\n");
        return notify_fail("ɽׯ����ŭ�� : �����˵������ȥһ��\n");
        }
        return :: valid_leave(who,dir);
  }
  return :: valid_leave(who,dir);
}
*/
