inherit ROOM;

void create ()
{
  set ("short", "к��ͤ");
  set ("long", @LONG

����˴���ֻ����ľ�����滨������һ�����������滨�к��ʯ϶֮
�¡���Ϫк��ʯ�㴩�ƣ���ʯΪ�����������ӡ�Ϫ�����ţ�������ͤ��
ͤ����һ��������ش��ң�sign����

LONG);
 set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "

ֻ������д��

                  ͤ   ��   к  

            ��                     ��
            ��                     �
            ��                     ��
            ��                     ��
            һ                     ��
       ��   ��                     ��
       Ԫ   Ȫ                     ��
       ��
       ��
 
û�뵽��Ԫ�Գ������书���о��˵�����֮�⣬��ѧ�ϵĳɾ�
Ҳ�ǲ�����\n",

]));

   set("light_up", 1);
set("outdoors", "/open/gblade" );
   set("exits", ([ /* sizeof() == 3 */
"east" : __DIR__"g2-2.c",
"north" : __DIR__"g2-5.c",
"west" : __DIR__"g2-4.c",
]));

  setup();
}

