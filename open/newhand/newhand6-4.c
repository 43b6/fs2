#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
  set( "long", "     ������վ����Wade��ʱҲ���ҵ��,�����Ľ����齻������һ�δ���Lum
,Lum����FS����������֮����ʦ������Ҳ��������,Լֻ����ʮ��λ���ҵ���
ʦ,ͬʱ����ķ�չҲ���ڽ���,һЩ������Ҳ����������ɫ����!!����Ҳ����
�����,��ʱ����Ҳһֱ���ȶ��з�չ!!!
" );
  set("exits", ([
  "north" : __DIR__"newhand6-3",
  "south" : __DIR__"newhand6-5",
               ]));
  set("light_up", 1);
  setup();
}

