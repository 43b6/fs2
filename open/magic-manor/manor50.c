#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�����");
	set ("long", @LONG
���Ͼ���ף����Ըо�Щ΢��������������Ʈ����������ǰ�߾�
���Եִｭ������Ϊ��֪�ľ���ɽׯ�ˡ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor49",
	"out"	: __DIR__"town/town44",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
