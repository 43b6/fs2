inherit ROOM;

void create ()
{
  set ("short", "���۱���");
  set ("long", @LONG
�����Ǵ��۱����е�ƫ��,�����߾��������´������ڵ�,����
�µĴ��߰���,�԰���ɽ��ľ���,��˵������������ƽϢ����
ɱ��Ĺ�Ч��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"aa40",
  "west" : __DIR__"aa42",
]));
}
