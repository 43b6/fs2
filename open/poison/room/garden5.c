// Room: /u/r/ranko/garden5.c
inherit ROOM;

void create ()
{
  set ("short", "��԰���벿��");
  set ("long", @LONG
�˴����ֵĶ���,���ݵ�����ƽʱ������.���ִ���Ѥ��ɫ�ʵ�
�����ڴ����涷��,���˿���Ŀ�ɿڴ�.����,������ע�����������
���е�һ��Ѫ����(Blood flower),�����Ѱ��ֲ�ﶼҪ���ĸߴ�,��
ɫҲ�쳣����,ͨ��Ļ��������������Ѫһ�㡣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"garden4-3.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "flower" : "һ��޴��Ѫ����,�������,��������˲���ϡ�������ڴ���Ϣ��
",
]));
  set("objects", ([ /* sizeof() == 3 */
  "/obj/source/green_snake.c" : 1,
  "/obj/source/poison_bird.c" : 1,
  "/obj/source/hundred_flower" : 1,
]));
  set("light_up", 1);

  setup();
}
