// guard.c

#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
                  set_name("������", ({ "lo shyu","lo","shyu" }) );
	set("gender", "����" );
 set("age",20);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
     set("long","��������Ĺ����,ר�Ű��˱�����,\n"
                 "����������йر��������顣\n");
	set("combat_exp",338);
	set("attitude", "peaceful");
        set("inquiry", ([
            "����"    :"�����׼������,���� faceoff ָ��,�����ҿ�ʼ������",
            "����"    :"���Ԩ�!!�������ϰֵ�ר��,�ҿɲ���,��������˷�Ŷ��",
            "�˷�"    :"���̨ߨ̨ߵ�,�ҽ����˷�",
        ]) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        carry_object("/obj/cloth")->wear();
}

