inherit EQUIP;

void create()
{
        set_name("[33m��������[0m",({"dragon_eye ring","ring"}) );
        set_weight(4500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�ڽ�ָ����������������а�����ڻƼ׽��������顣\n");
        set("unit","��");
        set("value", 40000);
        set("material","gem");
        set("no_auc",1);
        set("no_give",1);
        set("armor_type","finger");
        set("wear_msg","����$n֮��$N�����Ͽ�ʼ����[33m�����Ķ�����[0m\n");
        set("armor_prop/move", -3);
        set("armor_prop/dodge", -3);
        set("armor_prop/armor", 10);
        }
        setup();
}        
