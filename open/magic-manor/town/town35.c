#include <ansi.h>
#include "/open/open.h"
#include <room.h>

inherit "/std/room/hockshop";

void create ()
{
        set ("short", "����");
        set ("long", @LONG
������ʧ�����ǵ�ʱ���������ϵ�һ���������Ϊ�������
�������С���̣����Ե䵱��ʽ����ֵǮ�Ķ������Ի�ȡһ���Ľ�
Ǯ��Ϊ�ȼ����á�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town29",
	]));

        setup();
}