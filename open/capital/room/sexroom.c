#include <room.h>
#include <ansi.h>
inherit ROOM;
void create()
{  set ("short","ҽ��");
   set ("long",@LONG
һ���е��ª�ƾɵ�ҽԺ,����װ�ε����߰���,��������ı���
������˵�������,һ��ȥ����һ����������������⻶ӭ��,ǽ����
����һ����ľ�ƻ��м��ŷ��Ƶ�ְ��,������������ҽʦ����ͷ������
��,����ͷ��ȥ�м�СС��������,ҽʦ���ڰ��˶���������.

LONG);
    set("exits", ([ /* sizeof() == 3 */
          "east"  :  __DIR__"faceroom",
           "north"  :  __DIR__"groom",
           "south"  :  __DIR__"h06",
]));
  set("objects", ([ /* sizeof() == 1 */
    "/open/capital/npc/shyu1"       :     1,
]));
  set("no_kill", 1);
  set("no_fight", 1);
  set("no_magic", 1);
set ("light_up",1);
setup();
}
int valid_leave(object who, string dir)
{
if( dir=="north" && !who->query_temp("change") )
return notify_fail("�����ŭ�ۿ�����˵�� : ��������������ʲô��\n");
if( dir=="east" && !who->query_temp("faceoff") )
return notify_fail("�����ŭ�ۿ�����˵�� : �����������Ҵ�����\n");
        return ::valid_leave(who, dir);
}
