#include <room.h>
#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
void create()
{
set("short",HIR"["+HIY+"���﹧���齫��"+HIR+"]"NOR);
set("long", @LONG
����һ��ר�����������Ϣ�����ֳ�����������Ϊ��Ľ�ɫ
�������ʱ����������Ϣ��Ϊ���߸���Զ��·�����������һͬ
�������Ȧ�ɣ������ɱ�����ڶĲ���ม���������ϸ�Ĺ�����
�����������������䣩
LONG
);
set("light_up",1);
set("exits",([
   "east" : "/open/center/room/men",
]));
set("objects",([
"/open/center/npc/mj":1,
]));
set("item_desc",([
"board":"
һ������Ĳ�������  ÿ���ƶ�������롡����һ�򣭣�1w ��������7s
�����ƾ֣�addin        ��ʼ�ƾ֣�start
���ƣ�mo             �ؿ��ƾ֣�restart
�����1���ƣ�.1      �����2���ƣ�.2
�����3���ƣ�.3      �����4���ƣ�.4
���Լ����ƣ�.
���ƣ�dump xx        �ԣ�eat xx xx        
����pon              �ܣ�gon              
����hu               ����tin xx           
xxΪ����  ����eat 2w 3w
",
]));
setup();
}
