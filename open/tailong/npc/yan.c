inherit NPC;
void create()
{
        set_name("������",({"wang yu yan","wang","yan"}));
        set("title","��ѧͼ���");
        set("long","�����Ǿ�ͨ�ټ���ѧ����Ů��,�ٷ�������ѧ,���������������˵
����
C\n");
        set("gender","Ů��");
        set("combat_exp", 1000000);
        set("attitude","friendly");
        set("age",22);
        set("force",5000);
        set("max_force",5000);
        set("kee",1000);
        set("max_kee",1000);
        set("force_factor",30);
        setup();
        add_money("gold",100);
}
