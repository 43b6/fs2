//��ɽ����
inherit NPC;
void create()
{
        set_name("���Ż���",({"door scholar","scholar"}));
        set("gender","����");
        set("age",25);
        set("family/family_name","����");
        set("class","scholar");
        set("force",1500);
        set("max_force",1500);
        set("force_factor",10);
        set("str",25);
        set("long","�����еĸ߽�����֮һ�����и������������š�\n");
        set("combat_exp",200000);
        set_skill("stabber",70);
        set_skill("dodge",60);
        set_skill("parry",70);
        set_skill("force",60);
        set_skill("poetforce",60);
        set_skill("knowpen",80);
        set_skill("winter-steps",40);
        map_skill("dodge","winter-steps");
        map_skill("parry","knowpen");
        map_skill("stabber","knowpen");
        map_skill("force","poetforce");
        setup();
        carry_object("/open/scholar/obj/pen2")->wield();
        add_money("gold",15);
}
int accept_fight(object who)
{
return notify_fail("���Ż���˵�� : ��������ֵ���� , �벻Ҫ���źò��á�\n");
}

