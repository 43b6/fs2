#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����㳡");
	set ("long", @LONG
һ������Ĺ㳡�������˸�ʽ����ĵ��ߺ�ľ�����Ǿ���ׯ�ĸ�
��������ϰ��ĳ������㳡��������½��ĵ��ӷֳ��������������
��ϰ���ţ���ÿһ����Ӷ���һ��ר�ŵĽ�ͷ��ר�ĵ�ָ���š�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor27",
	"west"	: __DIR__"manor29",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
