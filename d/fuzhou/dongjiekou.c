// Room: /d/fuzhou/dongjiekou.c
// may. 12 1998 Java

inherit ROOM;

void create()
{
	set("short", "���ֿ�");
	set("long", @LONG
�����Ǹ��ݵ����ġ���ͨ����ɽ�����Ͼ�Ȫ�ݳ�����ȥ̨�壬��
ȥ��ɽ����������ƽ��ֱ����ԭ���ֱ߳��������Ķ��������������ֳ�
���ųǡ���������ֲ�Ŷ�����
    ���ϼ��������ƤЦ���ص�Ϸ�������ˡ�
LONG );

	set("exits", ([
		"south"   : __DIR__"nandajie",
		"north"   : __DIR__"beidajie",
		"east"    : __DIR__"dongdajie",
		"west"    : __DIR__"xidajie1",
	]));
	set("objects", ([
		"/d/city/npc/liumangtou" : 1,
		"/d/city/npc/liumang" : 3,
	]));
	set("outdoors", "fuzhou");
	set("coor/x", 1840);
	set("coor/y", -6300);
	set("coor/z", 0);
	setup();
	replace_program(ROOM);
}