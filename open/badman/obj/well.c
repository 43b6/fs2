inherit ITEM;
//inherit F_LIQUID;

void create()
{
        set("no_get", 1);
        set_name("ˮ��",({"well"}));
        set("long","һ������ȡˮ�ĵط� .\n");
        set("����",50);
        set("Һ��", ([
                "����": "ˮ",
                "����": "��ˮ",
                "ʣ": 50,
                "ֹ��": 30,
        ]) );
        setup();
}
