inherit NPC;
void create()
{
        set_name("����",({"monk yi","monk","yi"}));
        set("title","�����¸�ɮ");
        set("long","�����������е�һλ���Ƕμ��˵ĳ��ϼ�ɮ��,������������������
�ܴ�Ĺ��� ,��˵ÿ������������ѧ����
C\n");
        set("gender","����");
        set("combat_exp", 1100000);
        set("attitude","friendly");
        set("age",55);
        set("force",4000);
        set("max_force",4000);
        set_skill("force",100);
        set_skill("unarmed",100);
        set_skill("sunforce",100);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",110);
        set_skill("dodge",100);
        set_skill("parry",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor",15);
        setup();
        add_money("gold",100);
}
