 inherit NPC;
void create()
{
  set_name("֪��ɮ",({"monk"}));
        set("gender","����");
        set("class","scholar");
        set("combat_exp",5000);
        set("attitude","peaceful");
        set("age",23);
        set("chat_chance", 30);
        set("chat_msg", ({
        "֪��ɮ˵��: ʩ������,������ʲô�¡�\n",
        "֪��ɮ˵��: ʩ��,��Ҫ��ʲô�˻�ʲô�ط�,���ҾͶ��ˡ�\n",
        }));
        set("inquiry", ([
        "����" : "��������������,����������·ֱֱ�߾Ͷ��ˡ�",
        "����" : "�����,��ǰ������ס������������,�������˴��š�",
        "����" : "����ʦ����������λ��ʦ������Ĳ��Ժ������,������������˼��ˡ�",
        "Ĳ����" : "���Ǳ��µĸ�ɮ����֮��,�ڱ��µ���Ժ��\n",
        "������" : "���Ƕ���ǰ���򸾾�ס�ĵط�,��������Ķ�Ժ��\n",
        ]));
        set("force",500);
        set("max_force",500);
        set("max_kee",500);
        set("kee",500);
        set("force_factor", 1);
        set_skill("force",40);
        set_skill("unarmed",30);
        set_temp("apply/dodge",40);
        setup();
        add_money("silver",10);
       }
