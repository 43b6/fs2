#include <ansi.h>
#include <room.h>

inherit ROOM;
void create()
{
set("short","�ɾ����");
set("long", @LONG
����ɽ�еľ���ʥ�أ���ǰ��ˮ�̲�������������������������
һ��ʯ������¶�������ϼ��һ���̹⻷�ƵĹǺ��������У����㲻
֪���������Ĥ��(pray)������

                ½��ƵĹǺ� (Skeleton)

LONG);

        set("light_up", 1);
        set("light", 1);
        set("no_chome", 1);
        set("no_fanset", 1);
        set("exits", ([ /* sizeof() == 1 */
        "south" : "/open/tendo/room/b1",
        ]));
        setup();

}

void init()
{
        add_action("do_pray", "pray");
}

int do_pray(string str){
   object me;
   me = this_player();

        if(!str || str != "skeleton"){
                return notify_fail("�����˭����\n");

      return 1;
    }
            tell_object(me,HIY"��˫ϥ��أ��ϵĶ���½��ƵĹǺ�Ĥ��������\n"HIG"��Ȼ��һ��ϸ΢������������Ķ��䡣\n"HIR"��..��֪....ʱ���޶�.......\nֻ��...��ħ��ҵ....δ..��\n����...δ��̫ƽ..\n������...��ӥ�ڴ�\n��....��Ե��..����....�շ�\n��ħ����....������...֮..̫ƽ...\n����������...��Ȫ֮��\n����..�ల......\n"NOR);
            return 1;
}
