#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "��������");
	set ("long", @LONG
�ɾ����������˹���������һ��СС�����ң���ׯ����ƽʱ�Ӵ�
����֮�࣬������Ϣ�ĵط������Բ���Ҳ��Ϊ����һ�㣬����������
���У�ȴ���ԵĿ��Ը��ܵ�����������Ļ�Ҫǿ��Ҳ����������Դ��
���ɴ˶�����
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor01",
	]));

	set("light_up", 1);

	setup();
}
