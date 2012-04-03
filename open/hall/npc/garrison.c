#include <ansi.h>

inherit NPC;

void create()
{
        set_name("��������", ({ "hall garrison", "hall", "garrison" }) );
        set("long",@LONG
���Ǹ�����ִ�й�����سǹٱ�����Ȼ����������������������
���ǵ��书ʵ��ϡ��ƽ������������������֯���м��ɵ�սʿ��˭Ҳ��
���׵��������ǡ�
LONG);
        set("attitude", "peaceful");
//      set("vendetta_mark", "authority");
        set("pursuer", 1);

        set("str", 27);
        set("cor", 26);
        set("cps", 25);

        set("combat_exp",20000);

        set("chat_chance", 10);
        set("chat_msg", ({
                "��������˵: ����������...\n",
                "��������˵: �����������, ����������! ����ȥ��ˢ�����!\n",
                "��������˵: ����Ľ��Щ���Գ�ȥץ���ֵĵ�����...\n",
                "��������˵: �����ģ��ϴ��и����÷ݵ�ͼ������һ���п�ʲô�µġ�\n"+
                "��������˵: ��Ȼ�Ҹ������˸��Ǻ�, ��ϧ����Ȼ�Ҳ��������Ķ���\n",
        }) );

        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "���������ȵ�������������������־͸���\n",
                "���������ȵ����󵨵��񾹸Ҿܲ������ˣ����ˣ�\n"
        }) );

        set_skill("unarmed", 70);
        set_skill("sword", 70);
        set_skill("parry", 70);
        set_skill("dodge", 70);
        set_skill("move", 100);
        set_temp("apply/attack", 70);
        set_temp("apply/defense", 70);
        set_temp("apply/damage", 30);
        set_temp("apply/armor", 70);
        set_temp("apply/move", 100);

        setup();

        carry_object("/obj/cloth")->wear();
        carry_object("/obj/longsword")->wield();
}
