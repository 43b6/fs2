// guard.c

#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("ƽ��", ({ "man" }) );
	set("gender", "����" );
        set("age",45);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
	set("long",
                "һλ��ͨ���ϰ���.\n"
                "����æ�����Ĺ���.\n");
	set("combat_exp",600);
	set("attitude", "peaceful");
/*
        set("chat_chance", 30);
        set("chat_msg", ({
             "ƽ��˵: ˮ�;ƿ������������ĺ�ˮ����(fill ����).\n",
             "ƽ��˵: ƽ�ϳǵİ��������в� �� ��ҩ.\n",
             (: "random_move" :),
        }) );
*/
	setup();
        add_money("coin", 25);
        carry_object("/obj/cloth")->wear();
        carry_object(COMMON_OBJ"pill");
}

