// guard.c

#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
                  set_name("����", ({ "doctor shyu","doctor","shyu" }) );
	set("gender", "����" );
        set("age",45);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
     set("long","�մӹ������ݵ�����,ר�Ű��˼��÷�,\n"
                 "����������й����ݵ����顣\n");
	set("combat_exp",338);
	set("attitude", "peaceful");
        set("inquiry", ([
            "����"    :"�����׼������,���� change ָ��,�����ҿ�ʼ������",
            "����"    :"�����!!�����Ҷ��ӵ�ר��,�ҿɲ���,��������˷�Ŷ��",
            "�˷�"    :"�������ͷ����",
        ]) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        carry_object("/obj/cloth")->wear();
}

