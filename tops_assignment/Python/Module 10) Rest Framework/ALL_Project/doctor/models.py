from django.db import models

# Create your models here.
class Doctor(models.Model):
    department_choice = (
        ("Ophthalmology","Ophthalmology"),
        ("Radiology","Radiology"),
        ("Neurology","Neurology"),
        ("Dentistry","Dentistry"),
        ("Dermatology","Dermatology"),
        ("Pediatrics","Pediatrics"),
    )
    fname = models.CharField(max_length=100, blank=True)
    lname = models.CharField(max_length=100, blank=True)
    email = models.EmailField()
    mobile = models.PositiveIntegerField()
    department = models.CharField(max_length=100,choices=department_choice)

    def __str__(self):
        return self.fname + "  -  " + self.lname