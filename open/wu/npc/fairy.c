//��������� file

#include <ansi.h>

inherit NPC;

void create()
{
        set_name("ѩԵ", ({ "fairy" }) );
        set("nickname", HIM "�ǳ�֮��" NOR );
        set("gender", "Ů��");
        set("age", 19);
        set("long", HIW "�㿴��һλ����ɴ����Ů����Ŀ��Ц�������㣬���������׵�
�����������������Ŀ�⣮\n" NOR );

        set("str", 24);
        set("cor", 26);
        set("int", 29);

        set_skill("dodge", 100);
        set_skill("parry", 100);

	set("random_move",2);
        set("chat_chance", 20);
        set("chat_msg", ({
                HIW "ѩԵ�����̾��һ����.......\n"NOR,
                HIW "ѩԵ���������ʲô�˸��ǳ�����?\n"NOR,
                HIW "ѩԵ��Ū�ŷ��ң�ͻȻ������������������뵽���ǳ����ˡ�\n"NOR,
                 (: random_move :) })
            );
             
        set_temp("apply/attack", 0);
        set_temp("armor", 300000);
	set("combat_exp",83437);
        setup();
}

