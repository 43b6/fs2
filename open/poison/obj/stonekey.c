// 钥匙, 有锁的房间请到 /u/w/wade/workroom 参考
inherit ITEM;

void create()
{
        set_name("石钥匙", ({ "stonekey","key" }) );
        set("long", "这是一把具有磁性的石钥匙。\n");
        set("unit", "把");
        set_weight(800);
        set("no_drop",1);
        set("value", 0);
}
