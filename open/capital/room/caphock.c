// copy from Room: /d/snow/hockshop.c

#include </open/capital/capital.h>

inherit HOCKSHOP;

void create ()
{
  set ("short", "�ɼǵ���");
  set ("long", @LONG
������ͨ������游���沨������������֮�󣬾��ⲻΪ�����٣�
�ʲ��������ʹ�������������Ҫ�������ھ��ǣ����Ը�ͨ��Ż��н�
��ĲƸ����λ���������Ҳ�������ʲ�֮һ�����ɸ��ܹܹ�������
������������Ե䵱(pawn)����ȻҲ�������(redeem)�㻹��������
ѯ����Ʒ�ļ�ֵ(value)��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/ha" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/h16",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	����������Ե䵱(pawn)��Ʒ�������(redeem)�䵱
	���������Ʒ��Ҳ���Լ���(value)��Ʒ�ļ�ֵ��
",
]));

  set("save_file","/data/hockshop");

  setup();
}
