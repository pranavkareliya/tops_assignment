# Generated by Django 5.2.1 on 2025-05-17 10:18

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Doctor',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('fname', models.CharField(blank=True, max_length=100)),
                ('lname', models.CharField(blank=True, max_length=100)),
                ('email', models.EmailField(max_length=254)),
                ('mobile', models.PositiveIntegerField()),
                ('department', models.CharField(choices=[('Ophthalmology', 'Ophthalmology'), ('Radiology', 'Radiology'), ('Neurology', 'Neurology'), ('Dentistry', 'Dentistry'), ('Dermatology', 'Dermatology'), ('Pediatrics', 'Pediatrics')], max_length=100)),
            ],
        ),
    ]
