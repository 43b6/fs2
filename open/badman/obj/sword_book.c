//badsword-book.c
inherit ITEM;
void create()
{
        set_name("ħ�ս���",({"badsword book","book"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
                        "ħ�ս��ף�������ħ�ս��������÷��ţ�\n");
                set("value", 800);
                set("material", "paper");
                set("skill", ([
                        "name":        "badsword",
                        "sen_cost":     30,
                        "potential_cost":      1,
                        "difficulty":   20,
                        "max_skill":   100,
                ]) );
        }
        setup();
}
