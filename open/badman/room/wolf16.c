inherit ROOM;
void create()
{
  set ("short","������");
  set ("long",@LONG
һ�����ⷿ�� ,��ӭ��Ϯ��һ��ɱ�� .�㳢���Ŷ�ס���񲻱��ŵ�
 ,̧ͷһ�� ,�㷢��һ���Ҷ����ǽ�� ,��������ݵؿ��������� "��
���� " .����������ǰ�� ,�������ǹȵ�����-- "���� "�^�H !���Ǿ�
�������˫Ŀ ,����Ҫ���㿴���Ƶ� ,�����޷��Լ� !
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/master_wolf.c" : 1,
  "/open/badman/npc/wolf03.c" : 1,
]));
  
  set("light_up",1);
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"wolf15.c",
]));

  setup();
}
